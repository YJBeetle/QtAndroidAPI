#include "../../JArray.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../../JClass.hpp"
#include "../lang/Enum.hpp"
#include "../../JObject.hpp"
#include "./EnumSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	EnumSet::EnumSet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
	
	// Constructors
	
	// Methods
	java::util::EnumSet EnumSet::allOf(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"allOf",
			"(Ljava/lang/Class;)Ljava/util/EnumSet;",
			arg0.object<jclass>()
		);
	}
	java::util::EnumSet EnumSet::complementOf(java::util::EnumSet arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"complementOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	java::util::EnumSet EnumSet::copyOf(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/Collection;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	java::util::EnumSet EnumSet::copyOf(java::util::EnumSet arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	java::util::EnumSet EnumSet::noneOf(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"noneOf",
			"(Ljava/lang/Class;)Ljava/util/EnumSet;",
			arg0.object<jclass>()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	java::util::EnumSet EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	java::util::EnumSet EnumSet::range(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return callStaticObjectMethod(
			"java.util.EnumSet",
			"range",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::EnumSet EnumSet::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/EnumSet;"
		);
	}
} // namespace java::util

