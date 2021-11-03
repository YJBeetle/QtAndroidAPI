#pragma once

#include "./AbstractSet.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
class JClass;
namespace java::lang
{
	class Enum;
}
class JObject;

namespace java::util
{
	class EnumSet : public java::util::AbstractSet
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EnumSet(const char *className, const char *sig, Ts...agv) : java::util::AbstractSet(className, sig, std::forward<Ts>(agv)...) {}
		EnumSet(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::EnumSet allOf(JClass arg0);
		static java::util::EnumSet complementOf(java::util::EnumSet arg0);
		static java::util::EnumSet copyOf(JObject arg0);
		static java::util::EnumSet copyOf(java::util::EnumSet arg0);
		static java::util::EnumSet noneOf(JClass arg0);
		static java::util::EnumSet of(java::lang::Enum arg0);
		static java::util::EnumSet of(java::lang::Enum arg0, JArray arg1);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3);
		static java::util::EnumSet of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4);
		static java::util::EnumSet range(java::lang::Enum arg0, java::lang::Enum arg1);
		java::util::EnumSet clone();
	};
} // namespace java::util

