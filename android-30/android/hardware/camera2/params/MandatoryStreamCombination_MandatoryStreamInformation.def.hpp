#pragma once

#include "../../../../JObject.hpp"

class JObject;

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination_MandatoryStreamInformation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination_MandatoryStreamInformation(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAvailableSizes() const;
		jint getFormat() const;
		jint hashCode() const;
		jboolean isInput() const;
	};
} // namespace android::hardware::camera2::params

