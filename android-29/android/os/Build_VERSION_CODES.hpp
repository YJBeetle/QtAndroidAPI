#pragma once

#ifndef ANDROID_OS_BUILD_VERSION_CODES
#define ANDROID_OS_BUILD_VERSION_CODES

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Build_VERSION_CODES : public __JniBaseClass
	{
	public:
		// Fields
		static jint BASE();
		static jint BASE_1_1();
		static jint CUPCAKE();
		static jint CUR_DEVELOPMENT();
		static jint DONUT();
		static jint ECLAIR();
		static jint ECLAIR_0_1();
		static jint ECLAIR_MR1();
		static jint FROYO();
		static jint GINGERBREAD();
		static jint GINGERBREAD_MR1();
		static jint HONEYCOMB();
		static jint HONEYCOMB_MR1();
		static jint HONEYCOMB_MR2();
		static jint ICE_CREAM_SANDWICH();
		static jint ICE_CREAM_SANDWICH_MR1();
		static jint JELLY_BEAN();
		static jint JELLY_BEAN_MR1();
		static jint JELLY_BEAN_MR2();
		static jint KITKAT();
		static jint KITKAT_WATCH();
		static jint LOLLIPOP();
		static jint LOLLIPOP_MR1();
		static jint M();
		static jint N();
		static jint N_MR1();
		static jint O();
		static jint O_MR1();
		static jint P();
		static jint Q();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	jint Build_VERSION_CODES::BASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"BASE");
	}
	jint Build_VERSION_CODES::BASE_1_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"BASE_1_1");
	}
	jint Build_VERSION_CODES::CUPCAKE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"CUPCAKE");
	}
	jint Build_VERSION_CODES::CUR_DEVELOPMENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"CUR_DEVELOPMENT");
	}
	jint Build_VERSION_CODES::DONUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"DONUT");
	}
	jint Build_VERSION_CODES::ECLAIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR");
	}
	jint Build_VERSION_CODES::ECLAIR_0_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR_0_1");
	}
	jint Build_VERSION_CODES::ECLAIR_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR_MR1");
	}
	jint Build_VERSION_CODES::FROYO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"FROYO");
	}
	jint Build_VERSION_CODES::GINGERBREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"GINGERBREAD");
	}
	jint Build_VERSION_CODES::GINGERBREAD_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"GINGERBREAD_MR1");
	}
	jint Build_VERSION_CODES::HONEYCOMB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB");
	}
	jint Build_VERSION_CODES::HONEYCOMB_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB_MR1");
	}
	jint Build_VERSION_CODES::HONEYCOMB_MR2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB_MR2");
	}
	jint Build_VERSION_CODES::ICE_CREAM_SANDWICH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ICE_CREAM_SANDWICH");
	}
	jint Build_VERSION_CODES::ICE_CREAM_SANDWICH_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ICE_CREAM_SANDWICH_MR1");
	}
	jint Build_VERSION_CODES::JELLY_BEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN");
	}
	jint Build_VERSION_CODES::JELLY_BEAN_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN_MR1");
	}
	jint Build_VERSION_CODES::JELLY_BEAN_MR2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN_MR2");
	}
	jint Build_VERSION_CODES::KITKAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"KITKAT");
	}
	jint Build_VERSION_CODES::KITKAT_WATCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"KITKAT_WATCH");
	}
	jint Build_VERSION_CODES::LOLLIPOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"LOLLIPOP");
	}
	jint Build_VERSION_CODES::LOLLIPOP_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"LOLLIPOP_MR1");
	}
	jint Build_VERSION_CODES::M()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"M");
	}
	jint Build_VERSION_CODES::N()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"N");
	}
	jint Build_VERSION_CODES::N_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"N_MR1");
	}
	jint Build_VERSION_CODES::O()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"O");
	}
	jint Build_VERSION_CODES::O_MR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"O_MR1");
	}
	jint Build_VERSION_CODES::P()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"P");
	}
	jint Build_VERSION_CODES::Q()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"Q");
	}
	
	// Constructors
	void Build_VERSION_CODES::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build$VERSION_CODES",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class Build_VERSION_CODES : public __jni_impl::android::os::Build_VERSION_CODES
	{
	public:
		Build_VERSION_CODES(QAndroidJniObject obj) { __thiz = obj; }
		Build_VERSION_CODES()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUILD_VERSION_CODES

