#pragma once

#include "../../JObject.hpp"

class JFloatArray;
class JString;

namespace android::hardware
{
	class DisplayLuts_Entry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayLuts_Entry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayLuts_Entry(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DisplayLuts_Entry(JFloatArray arg0, jint arg1, jint arg2);
		
		// Methods
		JFloatArray getBuffer() const;
		jint getDimension() const;
		jint getSamplingKey() const;
		JString toString() const;
	};
} // namespace android::hardware

