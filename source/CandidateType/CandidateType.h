/*
 * FILENAME: CandidateType/CandidateType.h
 */

#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H
#include "../PersonType/PersonType.h"

constexpr int NUM_OF_CAMPUSES = 4;


class CandidateType : public PersonType {
public:
 // default constructor
 CandidateType();

 // settors
 void updateVotesByCampus(int campus, int votes);

 // gettors
 [[nodiscard]] int getTotalVotes() const;

 [[nodiscard]] int getVotesByCampus(int campus) const;

 // destructor
 ~CandidateType();

private:
 int campusVotes[NUM_OF_CAMPUSES];
 int votes;

 void p_updateVotes();
};


#endif //CANDIDATETYPE_H
