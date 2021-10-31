#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::effect
{
	class EffectFactory;
}

namespace android::media::effect
{
	class EffectContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EffectContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EffectContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject createWithCurrentGlContext();
		QAndroidJniObject getFactory();
		void release();
	};
} // namespace android::media::effect

