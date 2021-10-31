#include "./ObjectStreamClass.hpp"
#include "./ObjectInputStream_GetField.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectInputStream_GetField::ObjectInputStream_GetField(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ObjectInputStream_GetField::ObjectInputStream_GetField()
		: __JniBaseClass(
			"java.io.ObjectInputStream$GetField",
			"()V"
		) {}
	
	// Methods
	jboolean ObjectInputStream_GetField::defaulted(jstring arg0)
	{
		return callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ObjectInputStream_GetField::get(jstring arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			arg0,
			arg1
		);
	}
	jbyte ObjectInputStream_GetField::get(jstring arg0, jbyte arg1)
	{
		return callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			arg0,
			arg1
		);
	}
	jchar ObjectInputStream_GetField::get(jstring arg0, jchar arg1)
	{
		return callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jdouble ObjectInputStream_GetField::get(jstring arg0, jdouble arg1)
	{
		return callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1
		);
	}
	jfloat ObjectInputStream_GetField::get(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jint ObjectInputStream_GetField::get(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	jobject ObjectInputStream_GetField::get(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jlong ObjectInputStream_GetField::get(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jshort ObjectInputStream_GetField::get(jstring arg0, jshort arg1)
	{
		return callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ObjectInputStream_GetField::getObjectStreamClass()
	{
		return callObjectMethod(
			"getObjectStreamClass",
			"()Ljava/io/ObjectStreamClass;"
		);
	}
} // namespace java::io

