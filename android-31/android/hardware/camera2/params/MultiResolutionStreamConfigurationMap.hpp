#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class MultiResolutionStreamConfigurationMap : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiResolutionStreamConfigurationMap(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MultiResolutionStreamConfigurationMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jintArray getInputFormats();
		__JniBaseClass getInputInfo(jint arg0);
		jintArray getOutputFormats();
		__JniBaseClass getOutputInfo(jint arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

