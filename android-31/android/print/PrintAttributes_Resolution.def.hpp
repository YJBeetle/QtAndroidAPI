#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::print
{
	class PrintAttributes_Resolution : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintAttributes_Resolution(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_Resolution(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PrintAttributes_Resolution(JString arg0, JString arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getHorizontalDpi() const;
		JString getId() const;
		JString getLabel() const;
		jint getVerticalDpi() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::print

