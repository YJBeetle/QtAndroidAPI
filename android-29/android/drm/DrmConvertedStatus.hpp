#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::drm
{
	class DrmConvertedStatus : public JObject
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_INPUTDATA_ERROR();
		static jint STATUS_OK();
		JByteArray convertedData();
		jint offset();
		jint statusCode();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmConvertedStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmConvertedStatus(QJniObject obj);
		
		// Constructors
		DrmConvertedStatus(jint arg0, JByteArray arg1, jint arg2);
		
		// Methods
	};
} // namespace android::drm

