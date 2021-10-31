#include "../io/File.hpp"
#include "./ProcessBuilder_Redirect_Type.hpp"
#include "./ProcessBuilder_Redirect.hpp"

namespace java::lang
{
	// Fields
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::DISCARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"DISCARD",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::PIPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	
	// QAndroidJniObject forward
	ProcessBuilder_Redirect::ProcessBuilder_Redirect(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::appendTo(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"appendTo",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::from(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"from",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::to(java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"to",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	jboolean ProcessBuilder_Redirect::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::io::File ProcessBuilder_Redirect::file()
	{
		return callObjectMethod(
			"file",
			"()Ljava/io/File;"
		);
	}
	jint ProcessBuilder_Redirect::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
} // namespace java::lang

