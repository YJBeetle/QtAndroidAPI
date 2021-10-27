#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbstractCollection.hpp"
#include "./AbstractSet.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::lang
{
	class Enum;
}

namespace __jni_impl::java::util
{
	class EnumSet : public __jni_impl::java::util::AbstractSet
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject allOf(jclass arg0);
		static QAndroidJniObject complementOf(__jni_impl::java::util::EnumSet arg0);
		static QAndroidJniObject copyOf(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject copyOf(__jni_impl::java::util::EnumSet arg0);
		static QAndroidJniObject noneOf(jclass arg0);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0, jarray arg1);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2, __jni_impl::java::lang::Enum arg3);
		static QAndroidJniObject of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2, __jni_impl::java::lang::Enum arg3, __jni_impl::java::lang::Enum arg4);
		static QAndroidJniObject range(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1);
		QAndroidJniObject clone();
	};
} // namespace __jni_impl::java::util

#include "../io/ObjectInputStream.hpp"
#include "../lang/Enum.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void EnumSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.EnumSet",
			"(V)V");
	}
	
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
	QAndroidJniObject EnumSet::complementOf(__jni_impl::java::util::EnumSet arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"complementOf",
			"(Ljava/util/EnumSet;)Ljava/util/EnumSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"copyOf",
			"(Ljava/util/Collection;)Ljava/util/EnumSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::copyOf(__jni_impl::java::util::EnumSet arg0)
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
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.EnumSet",
			"of",
			"(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2)
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
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2, __jni_impl::java::lang::Enum arg3)
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
	QAndroidJniObject EnumSet::of(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1, __jni_impl::java::lang::Enum arg2, __jni_impl::java::lang::Enum arg3, __jni_impl::java::lang::Enum arg4)
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
	QAndroidJniObject EnumSet::range(__jni_impl::java::lang::Enum arg0, __jni_impl::java::lang::Enum arg1)
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
} // namespace __jni_impl::java::util

namespace java::util
{
	class EnumSet : public __jni_impl::java::util::EnumSet
	{
	public:
		EnumSet(QAndroidJniObject obj) { __thiz = obj; }
		EnumSet()
		{
			__constructor();
		}
	};
} // namespace java::util

