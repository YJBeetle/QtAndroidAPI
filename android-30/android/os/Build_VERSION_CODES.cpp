#include "./Build_VERSION_CODES.hpp"

namespace android::os
{
	// Fields
	jint Build_VERSION_CODES::BASE()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"BASE"
		);
	}
	jint Build_VERSION_CODES::BASE_1_1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"BASE_1_1"
		);
	}
	jint Build_VERSION_CODES::CUPCAKE()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"CUPCAKE"
		);
	}
	jint Build_VERSION_CODES::CUR_DEVELOPMENT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"CUR_DEVELOPMENT"
		);
	}
	jint Build_VERSION_CODES::DONUT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"DONUT"
		);
	}
	jint Build_VERSION_CODES::ECLAIR()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR"
		);
	}
	jint Build_VERSION_CODES::ECLAIR_0_1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR_0_1"
		);
	}
	jint Build_VERSION_CODES::ECLAIR_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ECLAIR_MR1"
		);
	}
	jint Build_VERSION_CODES::FROYO()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"FROYO"
		);
	}
	jint Build_VERSION_CODES::GINGERBREAD()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"GINGERBREAD"
		);
	}
	jint Build_VERSION_CODES::GINGERBREAD_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"GINGERBREAD_MR1"
		);
	}
	jint Build_VERSION_CODES::HONEYCOMB()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB"
		);
	}
	jint Build_VERSION_CODES::HONEYCOMB_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB_MR1"
		);
	}
	jint Build_VERSION_CODES::HONEYCOMB_MR2()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"HONEYCOMB_MR2"
		);
	}
	jint Build_VERSION_CODES::ICE_CREAM_SANDWICH()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ICE_CREAM_SANDWICH"
		);
	}
	jint Build_VERSION_CODES::ICE_CREAM_SANDWICH_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"ICE_CREAM_SANDWICH_MR1"
		);
	}
	jint Build_VERSION_CODES::JELLY_BEAN()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN"
		);
	}
	jint Build_VERSION_CODES::JELLY_BEAN_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN_MR1"
		);
	}
	jint Build_VERSION_CODES::JELLY_BEAN_MR2()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"JELLY_BEAN_MR2"
		);
	}
	jint Build_VERSION_CODES::KITKAT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"KITKAT"
		);
	}
	jint Build_VERSION_CODES::KITKAT_WATCH()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"KITKAT_WATCH"
		);
	}
	jint Build_VERSION_CODES::LOLLIPOP()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"LOLLIPOP"
		);
	}
	jint Build_VERSION_CODES::LOLLIPOP_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"LOLLIPOP_MR1"
		);
	}
	jint Build_VERSION_CODES::M()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"M"
		);
	}
	jint Build_VERSION_CODES::N()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"N"
		);
	}
	jint Build_VERSION_CODES::N_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"N_MR1"
		);
	}
	jint Build_VERSION_CODES::O()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"O"
		);
	}
	jint Build_VERSION_CODES::O_MR1()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"O_MR1"
		);
	}
	jint Build_VERSION_CODES::P()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"P"
		);
	}
	jint Build_VERSION_CODES::Q()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"Q"
		);
	}
	jint Build_VERSION_CODES::R()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION_CODES",
			"R"
		);
	}
	
	// QAndroidJniObject forward
	Build_VERSION_CODES::Build_VERSION_CODES(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Build_VERSION_CODES::Build_VERSION_CODES()
		: JObject(
			"android.os.Build$VERSION_CODES",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

