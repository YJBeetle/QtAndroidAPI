#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget::photopicker
{
	class EmbeddedPhotoPickerProviderFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EmbeddedPhotoPickerProviderFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmbeddedPhotoPickerProviderFactory(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject create(android::content::Context arg0);
	};
} // namespace android::widget::photopicker

