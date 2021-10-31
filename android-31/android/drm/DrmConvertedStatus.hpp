#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmConvertedStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint STATUS_ERROR();
		static jint STATUS_INPUTDATA_ERROR();
		static jint STATUS_OK();
		jbyteArray convertedData();
		jint offset();
		jint statusCode();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmConvertedStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmConvertedStatus(QJniObject obj);
		
		// Constructors
		DrmConvertedStatus(jint arg0, jbyteArray arg1, jint arg2);
		
		// Methods
	};
} // namespace android::drm

