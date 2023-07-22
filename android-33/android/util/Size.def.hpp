#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::util
{
	class Size : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Size(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Size(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Size(jint arg0, jint arg1);
		
		// Methods
		static android::util::Size parseSize(JString arg0);
		jboolean equals(JObject arg0) const;
		jint getHeight() const;
		jint getWidth() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::util

