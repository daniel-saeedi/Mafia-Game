CC_EXEC=g++ 
CC=${CC_EXEC} -std=c++11 

BUILD_DIR=build
SRC_DIR=src
EXCEPTION_DIR=${SRC_DIR}/Exception

all: mafia.out

mafia.out: ${BUILD_DIR}/main.o ${BUILD_DIR}/Game.o ${BUILD_DIR}/CommandHandler.o ${BUILD_DIR}/VoteSystem.o ${BUILD_DIR}/Vote.o ${BUILD_DIR}/Candidate.o ${BUILD_DIR}/Player.o ${BUILD_DIR}/Player.o ${BUILD_DIR}/Bulletproof.o ${BUILD_DIR}/Detective.o ${BUILD_DIR}/Doctor.o ${BUILD_DIR}/Godfather.o ${BUILD_DIR}/Joker.o ${BUILD_DIR}/Mafia.o ${BUILD_DIR}/Silencer.o ${BUILD_DIR}/Villager.o ${BUILD_DIR}/PlayerNotJoinedException.o ${BUILD_DIR}/GameNotCreatedException.o ${BUILD_DIR}/NotAllAssignedException.o ${BUILD_DIR}/GameAlreadyStartedException.o ${BUILD_DIR}/NotAliveVoteeException.o ${BUILD_DIR}/SilencedException.o ${BUILD_DIR}/UserNotAliveException.o ${BUILD_DIR}/UserCannotWakeupException.o  ${BUILD_DIR}/AlreadyAskedException.o ${BUILD_DIR}/SuspectIsDeadException.o ${BUILD_DIR}/PatientIsDeadException.o ${BUILD_DIR}/AlreadyHealedException.o ${BUILD_DIR}/PersonIsDeadException.o ${BUILD_DIR}/VotingInProgressException.o ${BUILD_DIR}/CannotSwapException.o ${BUILD_DIR}/CharactersAlreadySwappedException.o
	${CC} ${BUILD_DIR}/main.o ${BUILD_DIR}/Game.o ${BUILD_DIR}/CommandHandler.o ${BUILD_DIR}/VoteSystem.o ${BUILD_DIR}/Vote.o ${BUILD_DIR}/Candidate.o ${BUILD_DIR}/Player.o ${BUILD_DIR}/Player.o ${BUILD_DIR}/Bulletproof.o ${BUILD_DIR}/Detective.o ${BUILD_DIR}/Doctor.o ${BUILD_DIR}/Godfather.o ${BUILD_DIR}/Joker.o ${BUILD_DIR}/Mafia.o ${BUILD_DIR}/Silencer.o ${BUILD_DIR}/Villager.o ${BUILD_DIR}/PlayerNotJoinedException.o ${BUILD_DIR}/GameNotCreatedException.o ${BUILD_DIR}/NotAllAssignedException.o ${BUILD_DIR}/GameAlreadyStartedException.o ${BUILD_DIR}/NotAliveVoteeException.o ${BUILD_DIR}/SilencedException.o  ${BUILD_DIR}/UserNotAliveException.o ${BUILD_DIR}/UserCannotWakeupException.o  ${BUILD_DIR}/AlreadyAskedException.o ${BUILD_DIR}/SuspectIsDeadException.o ${BUILD_DIR}/PatientIsDeadException.o ${BUILD_DIR}/AlreadyHealedException.o ${BUILD_DIR}/PersonIsDeadException.o ${BUILD_DIR}/VotingInProgressException.o ${BUILD_DIR}/CannotSwapException.o ${BUILD_DIR}/CharactersAlreadySwappedException.o -o ${BUILD_DIR}/mafia.out

${BUILD_DIR}/main.o: main.cpp ${SRC_DIR}/CommandHandler.hpp
	${CC} -c main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/CommandHandler.o: ${SRC_DIR}/CommandHandler.cpp ${SRC_DIR}/Game.hpp ${EXCEPTION_DIR}/GameNotCreatedException.hpp
	${CC} -c ${SRC_DIR}/CommandHandler.cpp -o ${BUILD_DIR}/CommandHandler.o

${BUILD_DIR}/Game.o: ${SRC_DIR}/Game.cpp ${SRC_DIR}/Player.hpp ${SRC_DIR}/VoteSystem.hpp ${SRC_DIR}/Silencer.hpp ${SRC_DIR}/Bulletproof.hpp ${SRC_DIR}/Detective.hpp ${SRC_DIR}/Doctor.hpp ${SRC_DIR}/Godfather.hpp ${SRC_DIR}/Joker.hpp ${SRC_DIR}/Mafia.hpp ${SRC_DIR}/Villager.hpp ${EXCEPTION_DIR}/PlayerNotJoinedException.hpp ${EXCEPTION_DIR}/NotAllAssignedException.hpp ${EXCEPTION_DIR}/GameAlreadyStartedException.hpp ${EXCEPTION_DIR}/NotAliveVoteeException.hpp ${EXCEPTION_DIR}/SilencedException.hpp ${EXCEPTION_DIR}/UserNotAliveException.hpp ${EXCEPTION_DIR}/UserCannotWakeupException.hpp ${EXCEPTION_DIR}/UserNotAliveException.hpp ${EXCEPTION_DIR}/VotingInProgressException.hpp ${EXCEPTION_DIR}/CannotSwapException.hpp ${EXCEPTION_DIR}/CharactersAlreadySwappedException.hpp
	${CC} -c ${SRC_DIR}/Game.cpp -o ${BUILD_DIR}/Game.o

${BUILD_DIR}/VoteSystem.o: ${SRC_DIR}/VoteSystem.cpp ${SRC_DIR}/Vote.hpp ${SRC_DIR}/Player.hpp ${SRC_DIR}/Candidate.hpp
	${CC} -c ${SRC_DIR}/VoteSystem.cpp -o ${BUILD_DIR}/VoteSystem.o

${BUILD_DIR}/Vote.o: ${SRC_DIR}/Vote.cpp ${SRC_DIR}/Player.hpp
	${CC} -c ${SRC_DIR}/Vote.cpp -o ${BUILD_DIR}/Vote.o

${BUILD_DIR}/Candidate.o: ${SRC_DIR}/Candidate.cpp ${SRC_DIR}/Player.hpp
	${CC} -c ${SRC_DIR}/Candidate.cpp -o ${BUILD_DIR}/Candidate.o

${BUILD_DIR}/Player.o: ${SRC_DIR}/Player.cpp
	${CC} -c ${SRC_DIR}/Player.cpp -o ${BUILD_DIR}/Player.o

${BUILD_DIR}/Bulletproof.o: ${SRC_DIR}/Bulletproof.cpp ${SRC_DIR}/Villager.hpp
	${CC} -c ${SRC_DIR}/Bulletproof.cpp -o ${BUILD_DIR}/Bulletproof.o

${BUILD_DIR}/Detective.o: ${SRC_DIR}/Detective.cpp ${SRC_DIR}/Villager.hpp ${EXCEPTION_DIR}/AlreadyAskedException.hpp ${EXCEPTION_DIR}/SuspectIsDeadException.hpp
	${CC} -c ${SRC_DIR}/Detective.cpp -o ${BUILD_DIR}/Detective.o

${BUILD_DIR}/Doctor.o: ${SRC_DIR}/Doctor.cpp ${SRC_DIR}/Villager.hpp ${EXCEPTION_DIR}/PatientIsDeadException.hpp ${EXCEPTION_DIR}/AlreadyHealedException.hpp
	${CC} -c ${SRC_DIR}/Doctor.cpp -o ${BUILD_DIR}/Doctor.o

${BUILD_DIR}/Godfather.o: ${SRC_DIR}/Godfather.cpp ${SRC_DIR}/Mafia.hpp
	${CC} -c ${SRC_DIR}/Godfather.cpp -o ${BUILD_DIR}/Godfather.o

${BUILD_DIR}/Silencer.o: ${SRC_DIR}/Silencer.cpp ${SRC_DIR}/Mafia.hpp ${EXCEPTION_DIR}/PersonIsDeadException.cpp
	${CC} -c ${SRC_DIR}/Silencer.cpp -o ${BUILD_DIR}/Silencer.o

${BUILD_DIR}/Joker.o: ${SRC_DIR}/Joker.cpp ${SRC_DIR}/Player.hpp
	${CC} -c ${SRC_DIR}/Joker.cpp -o ${BUILD_DIR}/Joker.o

${BUILD_DIR}/Mafia.o: ${SRC_DIR}/Mafia.cpp ${SRC_DIR}/Player.hpp ${SRC_DIR}/VoteSystem.hpp
	${CC} -c ${SRC_DIR}/Mafia.cpp -o ${BUILD_DIR}/Mafia.o

${BUILD_DIR}/Villager.o: ${SRC_DIR}/Villager.cpp ${SRC_DIR}/Player.hpp
	${CC} -c ${SRC_DIR}/Villager.cpp -o ${BUILD_DIR}/Villager.o

${BUILD_DIR}/PlayerNotJoinedException.o: ${EXCEPTION_DIR}/PlayerNotJoinedException.cpp
	${CC} -c ${EXCEPTION_DIR}/PlayerNotJoinedException.cpp -o ${BUILD_DIR}/PlayerNotJoinedException.o

${BUILD_DIR}/GameNotCreatedException.o: ${EXCEPTION_DIR}/GameNotCreatedException.cpp
	${CC} -c ${EXCEPTION_DIR}/GameNotCreatedException.cpp -o ${BUILD_DIR}/GameNotCreatedException.o

${BUILD_DIR}/NotAllAssignedException.o: ${EXCEPTION_DIR}/NotAllAssignedException.cpp
	${CC} -c ${EXCEPTION_DIR}/NotAllAssignedException.cpp -o ${BUILD_DIR}/NotAllAssignedException.o

${BUILD_DIR}/GameAlreadyStartedException.o: ${EXCEPTION_DIR}/GameAlreadyStartedException.cpp
	${CC} -c ${EXCEPTION_DIR}/GameAlreadyStartedException.cpp -o ${BUILD_DIR}/GameAlreadyStartedException.o

${BUILD_DIR}/NotAliveVoteeException.o: ${EXCEPTION_DIR}/NotAliveVoteeException.cpp
	${CC} -c ${EXCEPTION_DIR}/NotAliveVoteeException.cpp -o ${BUILD_DIR}/NotAliveVoteeException.o

${BUILD_DIR}/SilencedException.o: ${EXCEPTION_DIR}/SilencedException.cpp
	${CC} -c ${EXCEPTION_DIR}/SilencedException.cpp -o ${BUILD_DIR}/SilencedException.o

${BUILD_DIR}/UserNotAliveException.o: ${EXCEPTION_DIR}/UserNotAliveException.cpp
	${CC} -c ${EXCEPTION_DIR}/UserNotAliveException.cpp -o ${BUILD_DIR}/UserNotAliveException.o

${BUILD_DIR}/UserCannotWakeupException.o: ${EXCEPTION_DIR}/UserCannotWakeupException.cpp
	${CC} -c ${EXCEPTION_DIR}/UserCannotWakeupException.cpp -o ${BUILD_DIR}/UserCannotWakeupException.o

${BUILD_DIR}/AlreadyAskedException.o: ${EXCEPTION_DIR}/AlreadyAskedException.cpp
	${CC} -c ${EXCEPTION_DIR}/AlreadyAskedException.cpp -o ${BUILD_DIR}/AlreadyAskedException.o

${BUILD_DIR}/SuspectIsDeadException.o: ${EXCEPTION_DIR}/SuspectIsDeadException.cpp
	${CC} -c ${EXCEPTION_DIR}/SuspectIsDeadException.cpp -o ${BUILD_DIR}/SuspectIsDeadException.o

${BUILD_DIR}/PatientIsDeadException.o: ${EXCEPTION_DIR}/PatientIsDeadException.cpp
	${CC} -c ${EXCEPTION_DIR}/PatientIsDeadException.cpp -o ${BUILD_DIR}/PatientIsDeadException.o

${BUILD_DIR}/AlreadyHealedException.o: ${EXCEPTION_DIR}/AlreadyHealedException.cpp
	${CC} -c ${EXCEPTION_DIR}/AlreadyHealedException.cpp -o ${BUILD_DIR}/AlreadyHealedException.o

${BUILD_DIR}/PersonIsDeadException.o: ${EXCEPTION_DIR}/PersonIsDeadException.cpp
	${CC} -c ${EXCEPTION_DIR}/PersonIsDeadException.cpp -o ${BUILD_DIR}/PersonIsDeadException.o

${BUILD_DIR}/VotingInProgressException.o: ${EXCEPTION_DIR}/VotingInProgressException.cpp
	${CC} -c ${EXCEPTION_DIR}/VotingInProgressException.cpp -o ${BUILD_DIR}/VotingInProgressException.o

${BUILD_DIR}/CannotSwapException.o: ${EXCEPTION_DIR}/CannotSwapException.cpp
	${CC} -c ${EXCEPTION_DIR}/CannotSwapException.cpp -o ${BUILD_DIR}/CannotSwapException.o

${BUILD_DIR}/CharactersAlreadySwappedException.o: ${EXCEPTION_DIR}/CharactersAlreadySwappedException.cpp
	${CC} -c ${EXCEPTION_DIR}/CharactersAlreadySwappedException.cpp -o ${BUILD_DIR}/CharactersAlreadySwappedException.o

clean:
	rm -rf ${BUILD_DIR} && mkdir -p ${BUILD_DIR}