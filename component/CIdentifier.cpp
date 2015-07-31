#include "CIdentifier.hh"

CIdentifier::CIdentifier() : Component() {

}

CIdentifier::~CIdentifier() {

}

CIdentifier   *CIdentifier::setId(int _id) {
  id = _id;
  return this;
}

int           CIdentifier::getId() {
  return id;
}