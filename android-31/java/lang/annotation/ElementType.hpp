#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ElementType.def.hpp"

namespace java::lang::annotation
{
	// Fields
	inline java::lang::annotation::ElementType ElementType::ANNOTATION_TYPE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"ANNOTATION_TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::CONSTRUCTOR()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"CONSTRUCTOR",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::FIELD()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"FIELD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::LOCAL_VARIABLE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"LOCAL_VARIABLE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::METHOD_()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"METHOD",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::MODULE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"MODULE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::PACKAGE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PACKAGE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::PARAMETER()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::RECORD_COMPONENT()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"RECORD_COMPONENT",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::TYPE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::TYPE_PARAMETER()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_PARAMETER",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	inline java::lang::annotation::ElementType ElementType::TYPE_USE()
	{
		return getStaticObjectField(
			"java.lang.annotation.ElementType",
			"TYPE_USE",
			"Ljava/lang/annotation/ElementType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::annotation::ElementType ElementType::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/annotation/ElementType;",
			arg0.object<jstring>()
		);
	}
	inline JArray ElementType::values()
	{
		return callStaticObjectMethod(
			"java.lang.annotation.ElementType",
			"values",
			"()[Ljava/lang/annotation/ElementType;"
		);
	}
} // namespace java::lang::annotation

// Base class headers
#include "../Enum.hpp"

