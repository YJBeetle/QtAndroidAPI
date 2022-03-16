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
		EnumMap(QAndroidJniObject obj) : java::util::AbstractMap(obj) {}
		
		// Constructors
		EnumMap(JClass arg0);
		EnumMap(java::util::EnumMap &arg0);
		EnumMap(JObject arg0);
		
		// Methods
		void clear() const;
		java::util::EnumMap clone() const;
		jboolean containsKey(JObject arg0) const;
		jboolean containsValue(JObject arg0) const;
		JObject entrySet() const;
		jboolean equals(JObject arg0) const;
		JObject get(JObject arg0) const;
		jint hashCode() const;
		JObject keySet() const;
		JObject put(java::lang::Enum arg0, JObject arg1) const;
		JObject put(JObject arg0, JObject arg1) const;
		void putAll(JObject arg0) const;
		JObject remove(JObject arg0) const;
		jint size() const;
		JObject values() const;
	};
} // namespace java::util

