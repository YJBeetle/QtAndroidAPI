#pragma once

#ifndef ANDROID_UTIL_STATESET
#define ANDROID_UTIL_STATESET

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class StateSet : public __JniBaseClass
	{
	public:
		// Fields
		static jintArray NOTHING();
		static jintArray WILD_CARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jintArray trimStateSet(jintArray arg0, jint arg1);
		static jboolean isWildCard(jintArray arg0);
		static jboolean stateSetMatches(jintArray arg0, jint arg1);
		static jboolean stateSetMatches(jintArray arg0, jintArray arg1);
		static jstring dump(jintArray arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jintArray StateSet::NOTHING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.StateSet",
			"NOTHING",
			"[I"
		).object<jintArray>();
	}
	jintArray StateSet::WILD_CARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.util.StateSet",
			"WILD_CARD",
			"[I"
		).object<jintArray>();
	}
	
	// Constructors
	void StateSet::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.StateSet",
			"(V)V");
	}
	
	// Methods
	jintArray StateSet::trimStateSet(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.StateSet",
			"trimStateSet",
			"([II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jboolean StateSet::isWildCard(jintArray arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"isWildCard",
			"([I)Z",
			arg0
		);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([II)Z",
			arg0,
			arg1
		);
	}
	jboolean StateSet::stateSetMatches(jintArray arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.StateSet",
			"stateSetMatches",
			"([I[I)Z",
			arg0,
			arg1
		);
	}
	jstring StateSet::dump(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.StateSet",
			"dump",
			"([I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class StateSet : public __jni_impl::android::util::StateSet
	{
	public:
		StateSet(QAndroidJniObject obj) { __thiz = obj; }
		StateSet()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_STATESET

