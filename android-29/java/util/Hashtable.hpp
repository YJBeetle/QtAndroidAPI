#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dictionary.hpp"

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
	class Void;
}

namespace java::util
{
	class Hashtable : public java::util::Dictionary
	{
	public:
		// Fields
		
		Hashtable(QAndroidJniObject obj);
		// Constructors
		Hashtable();
		Hashtable(jint &arg0);
		Hashtable(__JniBaseClass &arg0);
		Hashtable(jint &arg0, jfloat &arg1);
		
		// Methods
		void clear();
		jobject clone();
		jobject compute(jobject arg0, __JniBaseClass arg1);
		jobject computeIfAbsent(jobject arg0, __JniBaseClass arg1);
		jobject computeIfPresent(jobject arg0, __JniBaseClass arg1);
		jboolean contains(jobject arg0);
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject elements();
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		void forEach(__JniBaseClass arg0);
		jobject get(jobject arg0);
		jobject getOrDefault(jobject arg0, jobject arg1);
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject keySet();
		QAndroidJniObject keys();
		jobject merge(jobject arg0, jobject arg1, __JniBaseClass arg2);
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jobject putIfAbsent(jobject arg0, jobject arg1);
		jboolean remove(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jboolean replace(jobject arg0, jobject arg1, jobject arg2);
		jobject replace(jobject arg0, jobject arg1);
		void replaceAll(__JniBaseClass arg0);
		jint size();
		jstring toString();
		QAndroidJniObject values();
	};
} // namespace java::util

