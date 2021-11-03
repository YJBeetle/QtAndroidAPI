#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::util
{
	class TimingLogger : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimingLogger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimingLogger(QJniObject obj);
		
		// Constructors
		TimingLogger(JString arg0, JString arg1);
		
		// Methods
		void addSplit(JString arg0);
		void dumpToLog();
		void reset();
		void reset(JString arg0, JString arg1);
	};
} // namespace android::util

