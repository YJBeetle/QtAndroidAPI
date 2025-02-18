#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	class OnDevicePersonalizationException : public java::lang::Exception
	{
	public:
		// Fields
		static jint ERROR_ISOLATED_SERVICE_FAILED();
		static jint ERROR_PERSONALIZATION_DISABLED();
		
		// QJniObject forward
		template<typename ...Ts> explicit OnDevicePersonalizationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		OnDevicePersonalizationException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

