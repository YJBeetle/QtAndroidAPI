#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractMap.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Enum;
}

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
		EnumMap(jclass arg0);
		EnumMap(java::util::EnumMap &arg0);
		EnumMap(__JniBaseClass arg0);
		
		// Methods
		void clear();
		QAndroidJniObject clone();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jint hashCode();
		QAndroidJniObject keySet();
		jobject put(java::lang::Enum arg0, jobject arg1);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject remove(jobject arg0);
		jint size();
		QAndroidJniObject values();
	};
} // namespace java::util

