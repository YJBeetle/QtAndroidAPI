#include "../io/ObjectInputStream.hpp"
#include "../lang/Enum.hpp"
#include "./EnumSet.hpp"

namespace java::util
{
	// Fields
	
	EnumSet::EnumSet(QAndroidJniObject obj) { __thiz = obj; }
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
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/Collection;)Ljava/util/EnumSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(java::util::EnumSet arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.__jniObject().object()
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
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(java::lang::Enum arg0, java::lang::Enum arg1, java::lang::Enum arg2, java::lang::Enum arg3, java::lang::Enum arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::range(java::lang::Enum arg0, java::lang::Enum arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"range",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/util/EnumSet;"
		);
	}
} // namespace java::util

