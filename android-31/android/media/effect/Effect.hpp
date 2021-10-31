#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::effect
{
	class Effect : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Effect(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

