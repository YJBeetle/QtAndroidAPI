#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util
{
	class UUID;
}

namespace android::media::audiofx
{
	class AudioEffect_Descriptor : public JObject
	{
	public:
		// Fields
		JString connectMode();
		JString implementor();
		JString name();
		java::util::UUID type();
		java::util::UUID uuid();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioEffect_Descriptor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioEffect_Descriptor(QJniObject obj);
		
		// Constructors
		AudioEffect_Descriptor();
		AudioEffect_Descriptor(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		
		// Methods
	};
} // namespace android::media::audiofx

