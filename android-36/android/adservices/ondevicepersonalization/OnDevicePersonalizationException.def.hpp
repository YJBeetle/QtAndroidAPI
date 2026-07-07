#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	class OnDevicePersonalizationException : public java::lang::Exception
	{
	public:
		// Fields
		static jint ERROR_INFERENCE_FAILED();
		static jint ERROR_INFERENCE_MODEL_NOT_FOUND();
		static jint ERROR_INVALID_TRAINING_MANIFEST();
		static jint ERROR_ISOLATED_SERVICE_FAILED();
		static jint ERROR_ISOLATED_SERVICE_LOADING_FAILED();
		static jint ERROR_ISOLATED_SERVICE_MANIFEST_PARSING_FAILED();
		static jint ERROR_ISOLATED_SERVICE_TIMEOUT();
		static jint ERROR_PERSONALIZATION_DISABLED();
		static jint ERROR_SCHEDULE_TRAINING_FAILED();
		
		// QJniObject forward
		template<typename ...Ts> explicit OnDevicePersonalizationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		OnDevicePersonalizationException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

