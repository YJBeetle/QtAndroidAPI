#pragma once

#include "../../../JObject.hpp"

namespace android::media::effect
{
	class EffectFactory;
}

namespace android::media::effect
{
	class EffectContext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EffectContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EffectContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::effect::EffectContext createWithCurrentGlContext();
		android::media::effect::EffectFactory getFactory() const;
		void release() const;
	};
} // namespace android::media::effect

