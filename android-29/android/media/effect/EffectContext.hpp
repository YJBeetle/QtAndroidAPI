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
		
		EffectContext(QAndroidJniObject obj);
		// Constructors
		EffectContext() = default;
		
		// Methods
		static QAndroidJniObject createWithCurrentGlContext();
		QAndroidJniObject getFactory();
		void release();
	};
} // namespace android::media::effect

