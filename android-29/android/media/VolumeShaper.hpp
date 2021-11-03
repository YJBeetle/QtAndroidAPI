#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class VolumeShaper_Configuration;
}
namespace android::media
{
	class VolumeShaper_Operation;
}

namespace android::media
{
	class VolumeShaper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void apply(android::media::VolumeShaper_Operation arg0);
		void close();
		jfloat getVolume();
		void replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2);
	};
} // namespace android::media

