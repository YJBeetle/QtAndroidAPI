#include "../io/ObjectInputStream.hpp"
#include "../lang/Enum.hpp"
#include "./EnumSet.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	EnumSet::EnumSet(QAndroidJniObject obj) : java::util::AbstractSet(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject EnumSet::allOf(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"allOf",
			"(Ljava/lang/Class;)Ljava/util/EnumSet;",
			arg0
		);
	}
	QAndroidJniObject EnumSet::complementOf(java::util::EnumSet arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"complementOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/Collection;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(java::util::EnumSet arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	QAndroidJniObject EnumSet::noneOf(jclass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"noneOf",
			"(Ljava/lang/Class;)Ljava/util/EnumSet;",
			arg0
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject EnumSet::range(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"range",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject EnumSet::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/util/EnumSet;"
		);
	}
} // namespace java::util
