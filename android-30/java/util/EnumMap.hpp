#pragma once

#include "./AbstractMap.hpp"

class JArray;
class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JClass;
namespace java::lang
{
	class Enum;
}
class JObject;

namespace java::util
{
	class EnumMap : public java::util::AbstractMap
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EnumMap(const char *className, const char *sig, Ts...agv) : java::util::AbstractMap(className, sig, std::forward<Ts>(agv)...) {}
		EnumMap(QAndroidJniObject obj);
		
		// Constructors
		EnumMap(JClass arg0);
		EnumMap(java::util::EnumMap &arg0);
		EnumMap(JObject arg0);
		
		// Methods
		void clear();
		java::util::EnumMap clone();
		jboolean containsKey(JObject arg0);
		jboolean containsValue(JObject arg0);
		JObject entrySet();
		jboolean equals(JObject arg0);
		JObject get(JObject arg0);
		jint hashCode();
		JObject keySet();
		JObject put(java::lang::Enum arg0, JObject arg1);
		JObject put(JObject arg0, JObject arg1);
		void putAll(JObject arg0);
		JObject remove(JObject arg0);
		jint size();
		JObject values();
	};
} // namespace java::util

