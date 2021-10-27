#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class DataOutputStream;
}
namespace java::util::jar
{
	class Attributes_Name;
}

namespace java::util::jar
{
	class Attributes : public __JniBaseClass
	{
	public:
		// Fields
		
		Attributes(QAndroidJniObject obj);
		// Constructors
		Attributes();
		Attributes(jint &arg0);
		Attributes(java::util::jar::Attributes &arg0);
		
		// Methods
		void clear();
		jobject clone();
		jboolean containsKey(jobject arg0);
		jboolean containsValue(jobject arg0);
		QAndroidJniObject entrySet();
		jboolean equals(jobject arg0);
		jobject get(jobject arg0);
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		jstring getValue(java::util::jar::Attributes_Name arg0);
		jint hashCode();
		jboolean isEmpty();
		QAndroidJniObject keySet();
		jobject put(jobject arg0, jobject arg1);
		void putAll(__JniBaseClass arg0);
		jstring putValue(jstring arg0, jstring arg1);
		jstring putValue(const QString &arg0, const QString &arg1);
		jobject remove(jobject arg0);
		jint size();
		QAndroidJniObject values();
	};
} // namespace java::util::jar

