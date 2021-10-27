#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class UUID : public __JniBaseClass
	{
	public:
		// Fields
		
		UUID(QAndroidJniObject obj);
		// Constructors
		UUID(jlong &arg0, jlong &arg1);
		UUID() = default;
		
		// Methods
		static QAndroidJniObject fromString(jstring arg0);
		static QAndroidJniObject fromString(const QString &arg0);
		static QAndroidJniObject nameUUIDFromBytes(jbyteArray arg0);
		static QAndroidJniObject randomUUID();
		jint clockSequence();
		jint compareTo(jobject arg0);
		jint compareTo(java::util::UUID arg0);
		jboolean equals(jobject arg0);
		jlong getLeastSignificantBits();
		jlong getMostSignificantBits();
		jint hashCode();
		jlong node();
		jlong timestamp();
		jstring toString();
		jint variant();
		jint version();
	};
} // namespace java::util

