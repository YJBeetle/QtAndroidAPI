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
		
		// QJniObject forward
		template<typename ...Ts> explicit EffectContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EffectContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::effect::EffectContext createWithCurrentGlContext();
		android::media::effect::EffectFactory getFactory();
		void release();
	};
} // namespace android::media::effect

