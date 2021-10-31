#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
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
		static jint R();
		static jint S();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Build_VERSION_CODES(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Build_VERSION_CODES(QAndroidJniObject obj);
		
		// Constructors
		Build_VERSION_CODES();
		
		// Methods
	};
} // namespace android::os

