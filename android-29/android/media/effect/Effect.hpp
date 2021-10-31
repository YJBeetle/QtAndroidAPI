#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::effect
{
	class Effect : public __JniBaseClass
	{
	public:
		// Fields
		
		Effect(QAndroidJniObject obj);
		// Constructors
		Effect();
		
		// Methods
		void apply(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring getName();
		void release();
		void setParameter(jstring arg0, jobject arg1);
		void setUpdateListener(__JniBaseClass arg0);
	};
} // namespace android::media::effect

