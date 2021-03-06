#pragma once

#include "Recognizer.h"
#include "pocketSphinxTools.h"

class PhoneticRecognizer : public Recognizer {
public:
	BoundedTimeline<Phone> recognizePhones(
		const AudioClip& inputAudioClip,
		boost::optional<std::string> dialog,
		int maxThreadCount,
		ProgressSink& progressSink
	) const override;
};
