#pragma once

#include "../io/File.def.hpp"
#include "../../JObject.hpp"
#include "./ProcessBuilder_Redirect_Type.def.hpp"
#include "./ProcessBuilder_Redirect.def.hpp"

namespace java::lang
{
	// Fields
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::DISCARD()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"DISCARD",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::INHERIT()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"INHERIT",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::PIPE()
	{
		return getStaticObjectField(
			"java.lang.ProcessBuilder$Redirect",
			"PIPE",
			"Ljava/lang/ProcessBuilder$Redirect;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::appendTo(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"appendTo",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::from(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"from",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	inline java::lang::ProcessBuilder_Redirect ProcessBuilder_Redirect::to(java::io::File arg0)
	{
		return callStaticObjectMethod(
			"java.lang.ProcessBuilder$Redirect",
			"to",
			"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;",
			arg0.object()
		);
	}
	inline jboolean ProcessBuilder_Redirect::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::io::File ProcessBuilder_Redirect::file() const
	{
		return callObjectMethod(
			"file",
			"()Ljava/io/File;"
		);
	}
	inline jint ProcessBuilder_Redirect::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::lang::ProcessBuilder_Redirect_Type ProcessBuilder_Redirect::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/lang/ProcessBuilder$Redirect$Type;"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
