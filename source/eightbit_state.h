#pragma once
#include "ivoicecodec.h"
#include <string>
#include <unordered_map>

struct EightbitState {
  int crushFactor = 350;
  float gainFactor = 1.2;
  bool broadcastPackets = false;
  bool broadcastRawPcm = false;
  int desampleRate = 2;
  uint16_t port = 4000;
  uint16_t pcmPort = 4001;
  std::string ip = "127.0.0.1";
  std::unordered_map<int, std::tuple<IVoiceCodec *, int>> afflictedPlayers;
  std::unordered_map<int, IVoiceCodec *> broadcastCodecs;
};
