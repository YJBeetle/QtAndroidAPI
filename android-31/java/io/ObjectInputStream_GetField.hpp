#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectStreamClass;
}

namespace java::io
{
	class ObjectInputStream_GetField : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectInputStream_GetField(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
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
		java::io::ObjectStreamClass getObjectStreamClass();
	};
} // namespace java::io

