#pragma once

class ChecksumCalculator {
private:
  unsigned short checksum_ = 0;

public:
  void calculateChecksum(void *b, int len);
  unsigned short getChecksum();
};