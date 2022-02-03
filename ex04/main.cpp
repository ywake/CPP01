/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywake <ywake@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:48:33 by ywake             #+#    #+#             */
/*   Updated: 2022/02/04 01:48:27 by ywake            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

bool isInvalid(int argc, char const *argv[]);
std::string getContents(std::string &filename);
std::string replace(
  std::string contents, std::string &searchStr, std::string &replaceStr);
void output(std::string &filename, std::string &contents);

int main(int argc, char const *argv[])
{
  std::string filename;
  std::string s1;
  std::string s2;

  if (isInvalid(argc, argv))
    return (1);
  filename = std::string(argv[1]);
  s1 = std::string(argv[2]);
  s2 = std::string(argv[3]);

  std::string contents = getContents(filename);
  std::string replaced = replace(contents, s1, s2);
  output(filename, replaced);
}

bool isInvalid(int argc, char const *argv[])
{
  if (argc != 4)
    return (true);
  if (std::string(argv[2]).length() == 0)
    return (true);
  if (std::string(argv[3]).length() == 0)
    return (true);
  return (false);
}

std::string getContents(std::string &filename)
{
  std::string contents;
  std::ifstream ifs(filename);

  if (!ifs) {
    std::perror("error");
    std::exit(EXIT_FAILURE);
  }
  std::string line;
  while (std::getline(ifs, line)) {
    contents += line + "\n";
  }
  return (contents);
}

std::string replace(
  std::string contents, std::string &searchStr, std::string &replaceStr)
{
  std::string::size_type start;

  while ((start = contents.find(searchStr)) != std::string::npos) {
    size_t end = start + searchStr.length();
    std::string forward = contents.substr(0, start);
    std::string behind = contents.substr(end);
    contents = forward + replaceStr + behind;
  }
  return (contents);
}

void output(std::string &filename, std::string &contents)
{
  std::ofstream ofs(filename + ".replace");
  if (!ofs) {
    std::perror("error");
    std::exit(EXIT_FAILURE);
  }
  ofs << contents;
}
