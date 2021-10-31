#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class Enum;
}

namespace java::util
{
	class EnumSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EnumSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		EnumSet(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::EnumSet allOf(jclass arg0);
		static java::util::EnumSet complementOf(java::util::EnumSet arg0);
		static java::util::EnumSet copyOf(__JniBaseClass arg0);
		static java::util::EnumSet copyOf(java::util::EnumSet arg0);
		static java::util::EnumSet noneOf(jclass arg0);
		static java::util::EnumSet of(java::lang::Enum arg0);
		static java::util::EnumSet of(java::lang::Enum arg0, jarray arg1);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4);
		static java::util::EnumSet range(java::lang::Enum arg0, java::lang::Enum arg1);
		java::util::EnumSet clone();
	};
} // namespace java::util

