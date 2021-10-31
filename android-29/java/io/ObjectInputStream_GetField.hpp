#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectStreamClass;
}

namespace java::io
{
	class ObjectInputStream_GetField : public __JniBaseClass
	{
	public:
		// Fields
		
		ObjectInputStream_GetField(QAndroidJniObject obj);
		// Constructors
		ObjectInputStream_GetField();
		
		// Methods
		jboolean defaulted(jstring arg0);
		jboolean get(jstring arg0, jboolean arg1);
		jbyte get(jstring arg0, jbyte arg1);
		jchar get(jstring arg0, jchar arg1);
		jdouble get(jstring arg0, jdouble arg1);
		jfloat get(jstring arg0, jfloat arg1);
		jint get(jstring arg0, jint arg1);
		jobject get(jstring arg0, jobject arg1);
		jlong get(jstring arg0, jlong arg1);
		jshort get(jstring arg0, jshort arg1);
		QAndroidJniObject getObjectStreamClass();
	};
} // namespace java::io

