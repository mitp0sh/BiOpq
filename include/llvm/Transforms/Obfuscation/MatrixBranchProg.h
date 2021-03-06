#ifndef _SYMOBF_MATRIXBRANCHPROG_H_
#define _SYMOBF_MATRIXBRANCHPROG_H_

#include "llvm/Analysis/ConstantFolding.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/ADT/DenseSet.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/Pass.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/InstVisitor.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/Analysis/ConstantFolding.h"
#include "llvm/Transforms/Scalar.h"
#include "llvm/InitializePasses.h"
#include "llvm/IR/SymbolTableListTraits.h"
#include <list>


llvm::Function* GenMatMulFunc(llvm::LLVMContext &, llvm::Module &);
void ConvertIcmp2Mbp(llvm::Module&, llvm::ICmpInst *);

#endif
