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
		
		// QJniObject forward
		template<typename ...Ts> explicit VolumeShaper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper(QJniObject obj);
		
		// Constructors
		
		// Methods
		void apply(android::media::VolumeShaper_Operation arg0) const;
		void close() const;
		jfloat getVolume() const;
		void replace(android::media::VolumeShaper_Configuration arg0, android::media::VolumeShaper_Operation arg1, jboolean arg2) const;
	};
} // namespace android::media

