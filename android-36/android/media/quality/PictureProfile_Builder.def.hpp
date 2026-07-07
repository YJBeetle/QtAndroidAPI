#pragma once

#include "../../../JObject.hpp"

namespace android::media::quality
{
	class PictureProfile;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::media::quality
{
	class PictureProfile_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PictureProfile_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PictureProfile_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PictureProfile_Builder(android::media::quality::PictureProfile arg0);
		PictureProfile_Builder(JString arg0);
		
		// Methods
		android::media::quality::PictureProfile build() const;
		android::media::quality::PictureProfile_Builder setParameters(android::os::PersistableBundle arg0) const;
	};
} // namespace android::media::quality

