#include "./ObjectStreamClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectInputStream_GetField.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectInputStream_GetField::ObjectInputStream_GetField(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ObjectInputStream_GetField::ObjectInputStream_GetField()
		: JObject(
			"java.io.ObjectInputStream$GetField",
			"()V"
		) {}
	
	// Methods
	jboolean ObjectInputStream_GetField::defaulted(JString arg0) const
	{
		return callMethod<jboolean>(
			"defaulted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean ObjectInputStream_GetField::get(JString arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"get",
			"(Ljava/lang/String;Z)Z",
			arg0.object<jstring>(),
			arg1
		);
	}
	jbyte ObjectInputStream_GetField::get(JString arg0, jbyte arg1) const
	{
		return callMethod<jbyte>(
			"get",
			"(Ljava/lang/String;B)B",
			arg0.object<jstring>(),
			arg1
		);
	}
	jchar ObjectInputStream_GetField::get(JString arg0, jchar arg1) const
	{
		return callMethod<jchar>(
			"get",
			"(Ljava/lang/String;C)C",
			arg0.object<jstring>(),
			arg1
		);
	}
	jdouble ObjectInputStream_GetField::get(JString arg0, jdouble arg1) const
	{
		return callMethod<jdouble>(
			"get",
			"(Ljava/lang/String;D)D",
			arg0.object<jstring>(),
			arg1
		);
	}
	jfloat ObjectInputStream_GetField::get(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint ObjectInputStream_GetField::get(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"get",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	JObject ObjectInputStream_GetField::get(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	jlong ObjectInputStream_GetField::get(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"get",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	jshort ObjectInputStream_GetField::get(JString arg0, jshort arg1) const
	{
		return callMethod<jshort>(
			"get",
			"(Ljava/lang/String;S)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	java::io::ObjectStreamClass ObjectInputStream_GetField::getObjectStreamClass() const
	{
		return callObjectMethod(
			"getObjectStreamClass",
			"()Ljava/io/ObjectStreamClass;"
		);
	}
} // namespace java::io

