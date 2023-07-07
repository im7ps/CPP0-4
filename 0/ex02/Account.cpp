/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <sgerace@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 02:01:06 by sgerace           #+#    #+#             */
/*   Updated: 2023/04/08 02:20:33 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0) {
  _nbAccounts++;
  _totalAmount += initial_deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";created" << std::endl;
}

Account::~Account(void) {
  _nbAccounts--;
  _totalAmount -= _amount;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit) {
  _nbDeposits++;
  _totalNbDeposits++;
  _amount += deposit;
  _totalAmount += deposit;

  _displayTimestamp();
  std::cout << "index:" << _accountIndex
            << ";p_amount:" << _amount - deposit
            << ";deposit:" << deposit
            << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex
            << ";p_amount:" << _amount;

  if (withdrawal > _amount) {
    std::cout << ";withdrawal:refused" << std::endl;
    return false;
  }

  _nbWithdrawals++;
  _totalNbWithdrawals++;
  _amount -= withdrawal;
  _totalAmount -= withdrawal;

  std::cout << ";withdrawal:" << withdrawal
            << ";amount:" << _amount
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
  return true;
}

int Account::checkAmount(void) const {
  return _amount;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts
            << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    char buffer[20];
    strftime(buffer, 20, "[%Y%m%d_%H%M%S] ", ltm);
    std::cout << buffer;
}

