#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class SoundProfile;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::media::quality
{
	class SoundProfile_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SoundProfile_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SoundProfile_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SoundProfile_Builder(android::media::quality::SoundProfile arg0);
		SoundProfile_Builder(JString arg0);
		
		// Methods
		android::media::quality::SoundProfile build() const;
		android::media::quality::SoundProfile_Builder setParameters(android::os::PersistableBundle arg0) const;
	};
} // namespace android::media::quality

